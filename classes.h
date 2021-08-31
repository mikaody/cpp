
class Voiture {
	private:
	string couleur = "Rouge";
	string marque = "Renault";

	public:
	Voiture()
	{

	}

	public:
	Voiture(string color, string mark)
	{
		couleur = color;
		marque = mark;
	}

	public:
	string getCouleur()
	{
		return couleur;
	}

	public:
	string getMarque()
	{
		return marque;
	}

	public:
	void setCouleur(string clr)
	{
		couleur = clr;
	}

	public:
	void setMarque(string mrk)
	{
		marque = mrk;
	}

	public:
	void details()
	{
		cout << "La couleur: " << couleur << endl;
		cout << "La marque: " << marque << endl;
	}
};

class Personne
{
	private:
	string nom;
	string fonction;
	Voiture voiture;

	public:
	Personne()
	{
	}

	public:
	Personne(string nm, string fn, Voiture v)
	{
		nom = nm;
		fonction = fn;
		v.setCouleur("jaune");
		v.setMarque("Laguna");
		voiture.setCouleur(v.getCouleur());
		voiture.setMarque(v.getMarque());
	}

	public:
	void details()
	{
		cout << "Mr " << getNom() << " est le " << getFonction() << endl;
		cout << "Sa voiture est une " << voiture.getMarque() << " de couleur " << voiture.getCouleur() << endl;
	}

	public:string getNom() {
		return nom;
	}

	public:string getFonction() {
		return fonction;
	}	

};

