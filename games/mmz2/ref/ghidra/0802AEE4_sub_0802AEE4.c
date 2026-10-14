// sub_0802AEE4 at 0x0802AEE4 (thumb)

undefined4 sub_0802AEE4(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 4;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08036B0C(param_1,0,0,0);
    sub_0802AC30(param_1);
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar2 = 8;
    }
    else {
      bVar2 = 4;
    }
    bVar2 = *(byte *)(param_1 + 0x196) & bVar2;
    *(byte *)(param_1 + 0x196) = bVar2;
    if (bVar2 == 0) {
      iVar1 = sub_08036B0C(param_1,1,0,0);
      if (iVar1 == 0) {
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 4;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
        sub_0802AC30(param_1);
      }
    }
    else {
      sub_0802AFB0(param_1);
    }
  }
  return in_lr;
}

