// sub_08030504 at 0x08030504 (thumb)

undefined4 sub_08030504(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
    uVar3 = (uint)*(byte *)(param_1 + 0x177);
    uVar1 = sub_08035EB0(uVar3,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x2c1) = uVar1;
    sub_08035F88(param_1,&UNK_08335d78 + uVar3 * 4);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2d8);
    sub_08039DDC(param_1,3,uVar3,*(undefined *)(param_1 + 0x2b7));
    iVar2 = sub_080367D8(param_1,0);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 2;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 3;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
    }
    sub_0801E6AC(0x10);
  }
  return in_lr;
}

