// sub_0809B7AC at 0x0809B7AC (thumb)

undefined4 sub_0809B7AC(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(iVar3 + 4) & 0xff00ff) == 0x20002) {
    if (*(char *)(iVar1 + 0xb4) == '\x01') {
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c);
    }
  }
  else {
    if (*(char *)(iVar3 + 4) == '\x02') {
      return in_lr;
    }
    if (*(char *)(iVar3 + 1) != '\0') {
      if (*(char *)(iVar1 + 0xb4) == '\x01') {
        psVar2 = (short *)(iVar1 + 0xa4);
        if (*psVar2 < 0x11) {
          *psVar2 = *psVar2 + 8;
        }
      }
      else {
        *(undefined *)(iVar1 + 0xb6) = 1;
      }
    }
  }
  if ((((*(char *)(iVar3 + 4) != '\x02') && (*(char *)(iVar3 + 1) != '\0')) &&
      (iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar3 + 0xb4) != '\x01')) &&
     (*(char *)(*(int *)(param_1 + 4) + 1) == '\x02')) {
    if (*(char *)(iVar1 + 0xb7) == '\0') {
      *(char *)(iVar1 + 0xb7) = '\x01';
    }
    else {
      *(undefined *)(iVar3 + 0xb6) = 2;
    }
  }
  return in_lr;
}

