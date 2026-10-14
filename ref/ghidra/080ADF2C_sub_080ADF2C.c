// sub_080ADF2C at 0x080ADF2C (thumb)

undefined4 sub_080ADF2C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b6848,param_1 + 0x4c,8);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  sub_0809C980(param_1);
  puVar4 = (uint *)(param_1 + 0x90);
  uVar2 = *(ushort *)puVar4 & 0x40;
  if ((*(ushort *)puVar4 & 0x40) == 0) {
    if ((DAT_02022ada & 0x80) != 0) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 1;
      *puVar4 = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *puVar4 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    if ((bVar1 & 0x10) == 0) {
      local_18 = *(int *)(param_1 + 0x4c);
      iVar3 = 0x1000;
    }
    else {
      local_18 = *(int *)(param_1 + 0x4c);
      iVar3 = -0x1000;
    }
    local_18 = local_18 + iVar3;
    local_14 = *(int *)(param_1 + 0x50) + -0x1000;
    sub_0808827C(3,&local_18);
    switch(*(undefined *)(param_1 + 0x10)) {
    case 0:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    case 9:
      DAT_02022cb4 = 0x8000;
    }
  }
  return in_lr;
}

