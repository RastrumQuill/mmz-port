// sub_080608A8 at 0x080608A8 (thumb)

undefined4 sub_080608A8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  sub_08002638(&DAT_084334bc,(DAT_0202e656 - 0x2d0) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084334c8,(DAT_0202e456 - 7) * 0x20 + 0x200);
  sub_08002638(&DAT_08433494,(DAT_0202e652 - 0x360) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084334a0,(DAT_0202e452 - 5) * 0x20 + 0x200);
  sub_08002638(&DAT_084334e4,(DAT_0202e65a - 0x3d0) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084334f0,(DAT_0202e45a - 9) * 0x20 + 0x200);
  sub_08002638(&DAT_084334a8,(DAT_0202e654 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084334b4,(DAT_0202e454 - 6) * 0x20 + 0x200);
  sub_08002638(&DAT_084334d0,(DAT_0202e658 - 0x350) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084334dc,(DAT_0202e458 - 8) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x6302);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = *(undefined *)(param_1 + 0x11);
  *(byte *)(param_1 + 0x4a) =
       *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*(byte *)(param_1 + 0x11) & 1) << 4);
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_0803F9E4(param_1,&DAT_0833d3c4,0x20);
  piVar3 = (int *)(param_1 + 0xb4);
  *piVar3 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  sub_080CAD14(param_1,0,*(undefined *)(param_1 + 0x11));
  sub_080CAD14(param_1,1,*(undefined *)(param_1 + 0x11));
  sub_080CB210(param_1,0,*(undefined *)(param_1 + 0x11));
  sub_080841F0(param_1,0,*(undefined *)(param_1 + 0x11));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *piVar3 + 0x3700;
  }
  else {
    iVar2 = *piVar3 + -0x3700;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x3500;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08060AEC(param_1);
  return in_lr;
}

