// sub_080BFC0C at 0x080BFC0C (thumb)

undefined4 sub_080BFC0C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080BFD30(param_1);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xbd);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(char *)(iVar2 + 0x10) == '\0') {
        sub_0800860C((*(int *)(param_1 + 0x54) >> 0xc) + -1,
                     (*(int *)(param_1 + 0x58) + -1 >> 0xc) + 1,&DAT_08315c90);
      }
      else {
        sub_0800860C((*(int *)(param_1 + 0x54) >> 0xc) + -1,
                     (*(int *)(param_1 + 0x58) + -1 >> 0xc) + 1,&DAT_08320e54);
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    else if (cVar1 == '\x02') {
      if (*(char *)(iVar2 + 0x10) == '\0') {
        sub_0800860C((*(int *)(param_1 + 0x54) >> 0xc) + -1,
                     (*(int *)(param_1 + 0x58) + -1 >> 0xc) + 1,&DAT_08315c84);
      }
      else {
        sub_0800860C((*(int *)(param_1 + 0x54) >> 0xc) + -1,
                     (*(int *)(param_1 + 0x58) + -1 >> 0xc) + 1,&DAT_08320e48);
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    else {
      if (cVar1 != '\x03') goto LAB_080bfd10;
      if (*(char *)(iVar2 + 0x10) == '\0') {
        sub_0800860C((*(int *)(param_1 + 100) >> 0xc) + -1,
                     (*(int *)(param_1 + 0x68) + -1 >> 0xc) + 1,&DAT_08315c78);
      }
      else {
        sub_0800860C((*(int *)(param_1 + 100) >> 0xc) + -1,
                     (*(int *)(param_1 + 0x68) + -1 >> 0xc) + 1,&DAT_08320e3c);
      }
    }
    *(char *)(param_1 + 0xbd) = '\0';
  }
LAB_080bfd10:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834876c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

