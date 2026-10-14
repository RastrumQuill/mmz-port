// sub_08068328 at 0x08068328 (thumb)

undefined4 sub_08068328(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836281c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08068DE8(param_1);
    if (((*(char *)(param_1 + 0xd) == '\x06') || (*(char *)(param_1 + 0xd) == '\b')) ||
       (iVar2 = sub_08063614(param_1), iVar2 == 0)) {
      if (*(int *)(param_1 + 0xbc) != 0) {
        iVar2 = sub_08025794();
        if (iVar2 == 0) {
          sub_08007390(param_1 + 0x74,&DAT_08362984);
          return in_lr;
        }
        sub_08007390(param_1 + 0x74,&DAT_0836296c);
        *(int *)(param_1 + 0xbc) = 0;
      }
      cVar1 = *(char *)(param_1 + 0xc0);
      if (cVar1 == '\0') {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362840 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else {
        *(char *)(param_1 + 0xc0) = cVar1 + -1;
      }
    }
    else {
      *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080683F4(param_1);
  }
  return in_lr;
}

