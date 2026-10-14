// sub_0802538C at 0x0802538C (thumb)

undefined4 sub_0802538C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x176);
  if (bVar1 == 0) {
    bVar1 = sub_08034A24(param_1);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (bVar1 < 3) {
    if ((*(char *)(param_1 + 0x174) == '\0') && (*(char *)(param_1 + 0x175) == '\0')) {
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined4 *)(param_1 + 0xc4) = 0x80;
      sub_0801E9FC(param_1,2);
      sub_08025400(param_1);
      return in_lr;
    }
    sub_0801EA38(param_1,2,0,1);
  }
  *(undefined *)(param_1 + 0xf) = 2;
  sub_080254C8(param_1);
  return in_lr;
}

