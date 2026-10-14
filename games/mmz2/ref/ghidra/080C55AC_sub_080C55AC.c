// sub_080C55AC at 0x080C55AC (thumb)

undefined4 sub_080C55AC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080c55da:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(iVar3 + 0x18) + 9) & 1) == 0) goto LAB_080c56a4;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080c56a4;
      sub_080127E4(param_1,0x1d02);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080c55da;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        sub_080128D4(param_1);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar3 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar3;
        if (0x700 < iVar3) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
        if (0x2fff < uVar2) {
          *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
          return in_lr;
        }
      }
      goto LAB_080c56a4;
    }
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < (byte)(&DAT_08348dcc)[*(byte *)(param_1 + 0x11)]) goto LAB_080c56a4;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_080032EC(0xf2);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080c56a4:
  iVar3 = *(int *)(param_1 + 100) + (uint)*(byte *)(param_1 + 0x11) * 0x2000;
  *(int *)(param_1 + 0x54) = iVar3;
  if (iVar3 < DAT_0202ed50 + -0x8800) {
    do {
      iVar3 = *(int *)(param_1 + 0x54) + 0x12000;
      *(int *)(param_1 + 0x54) = iVar3;
    } while (iVar3 < DAT_0202ed50 + -0x8800);
  }
  if (*(int *)(param_1 + 0x54) < DAT_0202ed50) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348d18;
    *(undefined2 *)(param_1 + 0x26) = 1;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  return in_lr;
}

