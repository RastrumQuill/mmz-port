// sub_08062F78 at 0x08062F78 (thumb)

undefined4 sub_08062F78(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08432fe4,(DAT_0202e5da - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432ff0,(DAT_0202e3da - 4) * 0x20 + 0x200);
  sub_08002638(&DAT_0843300c,(DAT_0202e5de - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433018,(DAT_0202e3de - 7) * 0x20 + 0x200);
  sub_08002638(&DAT_08432ff8,(DAT_0202e5dc - 0x230) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433004,(DAT_0202e3dc - 5) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2500);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0803F9E4(param_1,&DAT_0833d5f0,0x10);
  }
  else {
    sub_0803F9E4(param_1,&DAT_0833d5f0,0x20);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 0x54) + 0x16000;
  iVar1 = sub_080093C4(*(int *)(param_1 + 0x54) + 0xa000,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1 + -0x1000;
  iVar1 = *(int *)(param_1 + 0x54) + 0xf000;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0xffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 8;
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x5c) + 8;
    *(int *)(param_1 + 0x5c) = iVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  sub_080B48C8(param_1,2);
  sub_0808841C(param_1,0,0);
  sub_0808841C(param_1,1,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08063170(param_1);
  return in_lr;
}

