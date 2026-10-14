// sub_080E0760 at 0x080E0760 (thumb)

undefined4 sub_080E0760(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_08002EA0(0x52);
  cVar2 = sub_080E0394(param_2);
  if (cVar2 != '\0') {
    sub_08002EF0(0x52);
    if ((*(char *)(param_1 + 0x235) == '\0') || (*(char *)(param_1 + 0x234) != '\0')) {
      bVar1 = *(byte *)(param_1 + 0x234);
      if (bVar1 == 1) {
        sub_080E0E64(&DAT_0202f8e0,0x100);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          sub_080E0E64(&DAT_0202f8e0,0);
        }
      }
      else if (bVar1 == 2) {
        sub_080E0E64(&DAT_0202f8e0,4);
      }
      sub_080DFBC0(param_1,5);
    }
    else {
      sub_080032EC(6);
      sub_080DFBC0(param_1,6);
    }
  }
  sub_080E05EC(param_1);
  return in_lr;
}

