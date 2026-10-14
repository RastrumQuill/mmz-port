// sub_080FB9F8 at 0x080FB9F8 (thumb)

undefined4 sub_080FB9F8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  puVar4 = (undefined *)(param_1 + 0xdcc);
  *(undefined4 *)(param_1 + 0xdc4) = 0x9d800;
  *(undefined4 *)(param_1 + 0xdc8) = 0x5f000;
  sub_08008BEC(6);
  *(undefined4 *)(param_1 + 0xde0) = 0;
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0x5000;
  *(undefined4 *)(param_1 + 0xdec) = 0xa000;
  *(undefined *)(param_1 + 0xea0) = 1;
  *(undefined4 *)(param_1 + 0xdf0) = 0x5000;
  *(undefined4 *)(param_1 + 0xdf4) = 0xa000;
  *(int *)(param_1 + 0xde4) = *(int *)(*(int *)(param_1 + 0xdd4) + 0x58) + 0x1000;
  *(undefined2 *)(param_1 + 0xdf8) = 0x100;
  *(undefined4 *)(param_1 + 0xe00) = 0;
  *(undefined4 *)(param_1 + 0xe04) = 0;
  *(undefined4 *)(param_1 + 0xe08) = DAT_0200246c;
  *(undefined4 *)(param_1 + 0xdfc) = 0;
  *(undefined *)(param_1 + 0xea1) = 3;
  *puVar4 = 0;
  *(undefined *)(param_1 + 0xdcd) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdcf) = 0;
  *(undefined *)(param_1 + 0xea2) = 0;
  *(undefined *)(param_1 + 0xea3) = 0;
  *(undefined4 *)(param_1 + 0xe88) = 0;
  *(undefined4 *)(param_1 + 0xe8c) = 0;
  *(undefined4 *)(param_1 + 0xe90) = 0;
  *(undefined4 *)(param_1 + 0xe94) = 0;
  *(undefined4 *)(param_1 + 0xe98) = 0;
  *(undefined4 *)(param_1 + 0xe9c) = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar3 = param_1 + 0xe70;
  iVar2 = param_1 + 0xe10;
  do {
    sub_08004E4C(iVar2,iVar3,1,0x280);
    *(int *)(param_1 + 0xe70 + iVar5 * 8) = 0xdc00 - iVar6;
    *(undefined4 *)(param_1 + 0xe74 + iVar5 * 8) = 0x8e00;
    *(byte *)(iVar2 + 0x11) = *(byte *)(iVar2 + 0x11) & 3 | 0x60;
    iVar6 = iVar6 + 0x1200;
    iVar3 = iVar3 + 8;
    iVar2 = iVar2 + 0x20;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  sub_0800393C(&DAT_085d78f8,(DAT_0202fa10 - 0xa0) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8370,(DAT_0202fb1c - 0x240) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d837c,(DAT_0202f91c - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7c7c,(DAT_0202fa6a - 0x284) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7c88,(DAT_0202f86a - 7) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8578,(DAT_0202fb50 - 0x280) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8584,(DAT_0202f950 - 6) * 0x20 + 0x200);
  uVar1 = sub_08034C44(puVar4,0x9d800,0x5f000);
  *(undefined4 *)(param_1 + 0xdd4) = uVar1;
  sub_080D8C2C(puVar4,0x9d800,0x5f800);
  sub_080D8C84(puVar4,*(int *)(*(int *)(param_1 + 0xdd4) + 0x54) + 0x5000,
               *(int *)(*(int *)(param_1 + 0xdd4) + 0x58) + 0x1000,0);
  sub_08004694(0xa8);
  return in_lr;
}

