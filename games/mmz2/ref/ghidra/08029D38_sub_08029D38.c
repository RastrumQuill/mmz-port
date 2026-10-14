// sub_08029D38 at 0x08029D38 (thumb)

undefined4 sub_08029D38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08035984(param_1,0);
  if ((iVar1 == 0) || (iVar2 = sub_08035A9C(), iVar2 == 0)) {
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 1;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = (char)iVar2;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    *(undefined *)(param_1 + 0x2b7) = 0;
    *(char *)(param_1 + 699) = (char)iVar1;
    *(undefined *)(param_1 + 0x2bf) = 0;
    iVar1 = 3;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(param_1 + 700 + iVar1) = 0;
    } while (iVar1 != 0);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08333c6c + iVar2 * 4));
  }
  return in_lr;
}

