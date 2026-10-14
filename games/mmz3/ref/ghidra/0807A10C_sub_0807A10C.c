// sub_0807A10C at 0x0807A10C (thumb)

undefined4 sub_0807A10C(int param_1,int *param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  cVar1 = *(char *)(iVar4 + 4);
  if ((((cVar1 == '\x03') || (cVar1 == '\x0e')) || (cVar1 == '\x0f')) &&
     (iVar3 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar3 + 0x8c) & 0x200) != 0)) {
    if (*(int *)(iVar3 + 0x54) < *param_2) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = 0xfe;
    }
    *(undefined *)(iVar3 + 0xba) = uVar2;
  }
  if ((((*(uint *)(iVar4 + 4) & 0x200ff) == 0x20002) &&
      (iVar4 = *(int *)(param_1 + 0x2c), *(char *)(iVar4 + 0xd) != '\x05')) &&
     (*(char *)(iVar4 + 0xb9) != '\0')) {
    *(undefined4 *)(iVar4 + 0xc) = 2;
    *(undefined4 *)(iVar4 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar4 + 9) * 4) + 8);
  }
  return in_lr;
}

