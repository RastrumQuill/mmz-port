// sub_0807A900 at 0x0807A900 (thumb)

undefined4 sub_0807A900(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((DAT_02030108 & 0x40) == 0) {
    cVar1 = sub_0807A850(param_1);
    if (cVar1 == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363f3c + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363f44 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

