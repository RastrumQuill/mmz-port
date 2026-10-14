// sub_0809FCDC at 0x0809FCDC (thumb)

undefined4 sub_0809FCDC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x13) = 1;
        sub_08017700(param_1,0x3402);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if (((*(byte *)(param_1 + 0x12) < 2) && (*(char *)(param_1 + 0x13) != '\0')) &&
         (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0'))
      {
        sub_0809F4C4(uVar5,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                     *(byte *)(param_1 + 0x12) + 1);
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x280;
      iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
      if (iVar3 < 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
        if (*(char *)(param_1 + 0x12) == '\0') {
          uVar4 = 0x20000000;
          iVar3 = 2;
          do {
            sub_080BC178(uVar5,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0x100
                         ,uVar4 >> 0x18);
            uVar4 = uVar4 + 0x20000000;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
          sub_080BC224(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        }
        sub_0809F51C(uVar5,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
        sub_0809F51C(uVar5,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08007390(param_1 + 0x74,&DAT_08367860);
    sub_08017700(param_1,0x3401);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

