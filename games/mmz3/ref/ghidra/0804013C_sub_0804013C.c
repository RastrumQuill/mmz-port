// sub_0804013C at 0x0804013C (thumb)

undefined4 sub_0804013C(int param_1,int *param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4);
  if (((((cVar1 == '\x03') || (cVar1 == '\x0e')) || (cVar1 == '\x0f')) &&
      ((iVar3 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar3 + 0x8c) & 0x200) != 0 ||
       (*(short *)(iVar3 + 0xa4) == 0)))) && ((DAT_020301a8 & 8) == 0)) {
    if (*(int *)(iVar3 + 0x54) < *param_2) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = 0xfe;
    }
    *(undefined *)(iVar3 + 0x11) = uVar2;
  }
  if (((**(char **)(param_1 + 4) != '\x02') && (*(int *)(*(char **)(param_1 + 4) + 0xc) != -1)) &&
     ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4) & 0x200ff) == 0x20002)) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((*(char *)(iVar3 + 0xd) != '\v') && (*(char *)(iVar3 + 0xd) != '\x05')) {
      *(undefined *)(iVar3 + 0xd) = 0xb;
      *(undefined *)(iVar3 + 0xe) = 0;
    }
  }
  return in_lr;
}

