// sub_0808F290 at 0x0808F290 (thumb)

undefined4 sub_0808F290(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    pbVar2 = (byte *)(param_1 + 0xc0);
    if (*pbVar2 == 0xc) {
      sub_08007390(param_1 + 0x74,&DAT_08365cec);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08365be4 + (uint)(byte)(&DAT_08365d4c)[*pbVar2] * 0x18);
    }
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      if (*pbVar2 == 0xc) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 3;
      }
    }
  }
  return in_lr;
}

