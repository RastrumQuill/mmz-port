// sub_08086E30 at 0x08086E30 (thumb)

undefined4 sub_08086E30(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(0x3b);
  }
  cVar1 = sub_08007098(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2000);
  if (cVar1 == '\0') {
    if ((*puVar3 & 0x200) == 0) {
      iVar2 = sub_0807F824(param_1);
      if (iVar2 == 0) {
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885b9a8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885b9d8 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else {
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885b9a8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        if ((*(char *)(param_1 + 0xb5) != '\0') && (*(char *)(param_1 + 0xd) == '\a')) {
          sub_08128884(param_1,*(undefined4 *)(&DAT_0885b9d8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      if (*(char *)(param_1 + 0xb7) == '\0') {
        if ((*puVar3 & 0x10000) == 0) {
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
        }
        else {
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      sub_080884E0(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

