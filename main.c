void appliquer_gravite(int* monde, int hauteur, int largeur){
	for(int j=0;j<largeur;j++){
		for(int i = hauteur-2;i >=0;i--){
			int current_index = i * largeur +j;
			int bas_index = (i+1)*largeur +j;
			if(monde[current_index]==1 && monde[bas_index]==0){
				monde[bas_index]=1;
				monde[current_index]=0;
			}
		}
	}
}
