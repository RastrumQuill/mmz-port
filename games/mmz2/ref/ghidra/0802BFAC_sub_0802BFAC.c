// sub_0802BFAC at 0x0802BFAC (thumb)

undefined4 sub_0802BFAC(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ec34;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar1 = DAT_0202ec36;
  }
  if (((uVar1 & 0x8000) != 0) ||
     (bVar2 = sub_08036CBC(param_1,3),
     (*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & bVar2) == 0)) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 3;
    sub_0801EA38(param_1,0x71,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x2b9) = 4;
  }
  return in_lr;
}

