// sub_08063870 at 0x08063870 (thumb)

undefined4 sub_08063870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08432fa8,(DAT_0202e5d4 - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432fb4,(DAT_0202e3d4 - 4) * 0x20 + 0x200);
  sub_08002638(&DAT_08432fd0,(DAT_0202e5d8 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432fdc,(DAT_0202e3d8 - 7) * 0x20 + 0x200);
  sub_08002638(&DAT_08432fbc,(DAT_0202e5d6 - 0x230) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432fc8,(DAT_0202e3d6 - 5) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2200);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0803F9E4(param_1,&DAT_0833d660,0x10);
  }
  else {
    sub_0803F9E4(param_1,&DAT_0833d660,0x20);
  }
  iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  piVar3 = (int *)(param_1 + 0xb8);
  *piVar3 = iVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x58) = *piVar3;
  uVar2 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*piVar3 + -0x5000);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*piVar3 + -0x5000);
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xd0) = 0;
  sub_080B48C8(param_1,1);
  sub_0808E824(param_1,0,0);
  sub_0808E824(param_1,1,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08063A40(param_1);
  return in_lr;
}

