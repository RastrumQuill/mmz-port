// sub_08030638 at 0x08030638 (thumb)

undefined4 sub_08030638(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x2b9);
  if (bVar1 == 0) {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 3;
    *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
    *(byte *)(param_1 + 0x179) = bVar1;
    sub_08030774(param_1);
  }
  else {
    iVar4 = bVar1 - 1;
    *(byte *)(param_1 + 0x2b9) = (byte)iVar4;
    sub_08035F88(param_1,&UNK_08335d78 + (uint)*(byte *)(param_1 + 0x177) * 4);
    sub_08035FB4(param_1,*(undefined2 *)(param_1 + 0x2c2),8 - iVar4,8);
    uVar2 = sub_08036844(param_1,(int)*(char *)(param_1 + 0x2b8));
    uVar3 = uVar2 >> 0x10;
    if ((((uVar2 & 0xf) != 0) || ((uVar3 & 0xf) != 0)) || (iVar4 == 0)) {
      if ((*(char *)(param_1 + 0x2b8) == '\0') ||
         (((((uVar2 & 0xf) == 0 || ((uVar2 & 0x400) != 0)) ||
           (((uVar2 & 0xff7f) == 0xf || ((uVar2 & 0xff7f) == 0xe)))) &&
          ((((uVar3 & 0xf) == 0 || ((uVar3 & 0x400) != 0)) ||
           (((uVar3 & 0xffffff7f) == 0xf || ((uVar3 & 0xffffff7f) == 0xe)))))))) {
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 3;
      }
      else {
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 3;
      }
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
    }
  }
  return in_lr;
}

