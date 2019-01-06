#ifndef CL_SACH_H_
#define CL_SACH_H_
#include <string>
class SachViet
{
protected:
		typedef std::string str;
public:
		//Constructors, Destructor
		SachViet() {}
		SachViet(
				const str& _ten,
				const str& _ma_sach,
				const str& _tac_gia,
				const str& _nxb,
				const str& _gia_sach
		) : sTen(_ten), sMaSach(_ma_sach), sTacGia(_tac_gia), sNXB(_nxb), sGiaSach(_gia_sach) {}
		virtual ~SachViet(){}

		//Read, Write data
		virtual std::ostream& write(std::ostream& os) const;
		virtual std::istream& read(std::istream& is);
		virtual std::ifstream& read(std::ifstream& ifs);

		//Setters
		inline str& ten() { return sTen; }
		inline str& ma_sach() { return sMaSach; }
		inline str& tac_gia() { return sTacGia; }
		inline str& nxb() { return sNXB; }
		inline str& gia_sach() { return sGiaSach; }

		//Getters
		inline const str& ten() const { return sTen; }
		inline const str& ma_sach() const { return sMaSach; }
		inline const str& tac_gia() const { return sTacGia; }
		inline const str& nxb() const { return sNXB; }
		inline const str& gia_sach() const { return sGiaSach; }

		//non-member functions
		friend inline std::istream& operator>>(std::istream& is, SachViet& sv) { return sv.read(is); }
		friend inline std::ifstream& operator>>(std::ifstream& ifs, SachViet& sv) { return sv.read(ifs); }
		friend inline std::ostream& operator<<(std::ostream& os, const SachViet& sv) { return sv.write(os); }

private:
		str sTen, sMaSach, sTacGia, sNXB, sGiaSach;
};
#endif