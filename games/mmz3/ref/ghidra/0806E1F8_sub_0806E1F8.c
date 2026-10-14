// sub_0806E1F8 at 0x0806E1F8 (thumb)

undefined4 sub_0806E1F8(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    puVar2 = (uint *)(param_1 + 0xb4);
    *(uint *)(param_1 + 0x5c) = *puVar2 & 1;
    iVar1 = (*puVar2 & 1) + ((*puVar2 & 2) >> 1);
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar1 = iVar1 + ((*puVar2 & 4) >> 2);
    *(int *)(param_1 + 0x5c) = iVar1;
    *(uint *)(param_1 + 0x5c) = iVar1 + ((*puVar2 & 8) >> 3);
    *puVar2 = *puVar2 & 0xffffff0f;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    uVar3 = (uint)*(byte *)(param_1 + 0x13);
    if (*(uint *)(param_1 + 0x5c) == uVar3) {
      if ((*(uint *)(param_1 + 0xb4) & 1 << (uVar3 + 7 & 0xff)) >> (uVar3 + 7 & 0xff) == 0) {
        sub_0806E3D8(param_1,0,*(byte *)(param_1 + 10) >> 4 & 1,uVar3 - 1 & 0xff);
      }
      else {
        sub_0806E3D8(param_1,2,*(byte *)(param_1 + 10) >> 4 & 1,uVar3 - 1 & 0xff);
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else if ((*(uint *)(param_1 + 0xb4) & 1 << (uVar3 + 7 & 0xff)) >> (uVar3 + 7 & 0xff) == 0) {
      sub_0806E3D8(param_1,1,*(byte *)(param_1 + 10) >> 4 & 1,uVar3 - 1 & 0xff);
    }
    else {
      sub_0806E3D8(param_1,3,*(byte *)(param_1 + 10) >> 4 & 1,uVar3 - 1 & 0xff);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

