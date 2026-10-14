// sub_080699D4 at 0x080699D4 (thumb)

undefined4 sub_080699D4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if ((DAT_02030108 & 0x40) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    cVar1 = sub_08069740(param_1);
  }
  else {
    cVar1 = sub_08069740(param_1);
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0806985C(param_1);
    cVar1 = sub_080697A4(param_1);
  }
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362aa0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362ac0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

