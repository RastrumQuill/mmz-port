// sub_0802A7EC at 0x0802A7EC (thumb)

undefined4 sub_0802A7EC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x177);
  if ((((*pcVar3 == '\x01') &&
       (bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)), (bVar1 & 0xc) != 0))
      && ((~(*(byte *)(param_1 + 10) >> 4) & 1) != (bVar1 >> 3 & 1))) && ((bVar1 & 3) != 0)) {
    if ((bVar1 & 1) == 0) {
      *pcVar3 = '\x03';
      iVar4 = 3;
    }
    else {
      *pcVar3 = '\x02';
      iVar4 = 2;
    }
    sub_0801EA38(param_1,(&DAT_08335c94)[iVar4],(int)*(char *)(param_1 + 0x71),
                 (int)*(char *)(param_1 + 0x72));
  }
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
    uVar5 = (uint)*(byte *)(param_1 + 0x177);
    uVar2 = sub_08035EB0(uVar5,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x2c1) = uVar2;
    sub_08035F88(param_1,&DAT_08335d44 + uVar5 * 4);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2d8);
    sub_08039DDC(param_1,0,uVar5,*(undefined *)(param_1 + 0x2b7));
    iVar4 = sub_080367D8(param_1,0);
    if (iVar4 == 0) {
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

