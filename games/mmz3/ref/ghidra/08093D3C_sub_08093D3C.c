// sub_08093D3C at 0x08093D3C (thumb)

undefined4 sub_08093D3C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x8e05);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        pcVar4 = (char *)(param_1 + 0xbc);
        if (*pcVar4 == '\0') {
          *pcVar4 = '\x01';
          uVar2 = 8;
        }
        else {
          if (*pcVar4 == '\x02') {
            *pcVar4 = '\x03';
          }
          uVar2 = 1;
        }
        *(undefined *)(param_1 + 0xd) = uVar2;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_0809357C(param_1,1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x25) = 0x19;
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
    sub_08017700(param_1,0x8e04);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xbc) == '\x02') {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar3 = iVar5 + -0x100;
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = iVar5 + 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

