// sub_0806DF1C at 0x0806DF1C (thumb)

undefined4 sub_0806DF1C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 4) || ((DAT_02030108 & 0x40) == 0)) {
    if ((byte)(*(char *)(param_1 + 0x10) - 2U) < 2) {
      if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
LAB_0806df98:
        cVar1 = sub_0806DDEC(param_1);
        if (cVar1 != '\0') {
          return in_lr;
        }
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362f6c + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362f7c + (uint)*(byte *)(param_1 + 0xd) * 4));
        uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
        if (uVar2 < 0x19001) {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        goto LAB_0806dff2;
      }
    }
    else if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) goto LAB_0806df98;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806E024(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_0806dff2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

