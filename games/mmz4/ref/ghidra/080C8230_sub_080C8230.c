// sub_080C8230 at 0x080C8230 (thumb)

undefined4 sub_080C8230(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08862ac8);
    *(undefined *)(param_1 + 0x22) = 1;
    sub_0801CF00(param_1,0x904);
    *(undefined4 *)(param_1 + 100) = 0x5a;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar4;
  iVar2 = DAT_0202dbf0;
  if (((iVar4 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) || (iVar1 == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x1200;
    *(undefined *)(iVar1 + 0x171) = 1;
    *(bool *)(iVar1 + 0x172) = iVar1 == 0;
    if ((int)*(uint *)(param_1 + 100) < 0x16) {
      if ((*(uint *)(param_1 + 100) & 1) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar3;
    }
  }
  return in_lr;
}

