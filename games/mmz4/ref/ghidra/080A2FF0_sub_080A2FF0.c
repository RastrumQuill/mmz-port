// sub_080A2FF0 at 0x080A2FF0 (thumb)

undefined4 sub_080A2FF0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x20000 + 0x87010000 >> 0x10);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885e8f4 + (uint)*(byte *)(param_1 + 0x11) * 0x30,param_1 + 0x54,
               0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80a3739;
  *(undefined *)(param_1 + 0x25) = 0x19;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1400;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080a30e2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1400;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar2 = 0xffffff00;
    }
    else if (bVar1 == 2) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1400;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar2 = 0x100;
    }
    else {
      if (bVar1 != 3) goto LAB_080a30e2;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1400;
      *(undefined4 *)(param_1 + 0x5c) = 0x100;
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
LAB_080a30e2:
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080A2FC0(param_1);
  return in_lr;
}

