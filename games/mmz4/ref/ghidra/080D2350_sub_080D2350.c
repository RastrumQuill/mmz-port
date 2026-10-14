// sub_080D2350 at 0x080D2350 (thumb)

undefined4 sub_080D2350(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  puVar3 = (undefined4 *)(param_1 + 0x54);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) != '\0') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(int *)(param_1 + 0x40) = param_1 + 0x74;
    if (*(char *)(iVar2 + 8) == '\x02') {
      *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x10) + '\x19';
      sub_0801D3D0(param_1,8);
    }
    else {
      *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x10) + '\x11';
      sub_0801D3D0(param_1,0xc);
    }
    iVar1 = 2;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + 0x54);
      puVar3[1] = *(undefined4 *)(iVar2 + 0x58);
      puVar3 = puVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    *(undefined *)(param_1 + 0x12) = 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
    sub_080D23E0(param_1);
  }
  return in_lr;
}

