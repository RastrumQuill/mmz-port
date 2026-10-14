// sub_080351C0 at 0x080351C0 (thumb)

undefined4 sub_080351C0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xd2) = 0;
    iVar6 = *(int *)(param_1 + 0x4c) + -0x7800;
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar5 = iVar3 - iVar6;
    if (iVar5 < 0) {
      iVar5 = iVar6 - iVar3;
    }
    if (iVar5 < 0x5000) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xd2) = 1;
      sub_0803455C(param_1);
      return in_lr;
    }
    sub_08029778(param_1,10);
    *(undefined *)(param_1 + 0xe) = 0;
    uVar4 = sub_08033B30(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    sub_0800561C(param_1 + 0x74,&DAT_082ad610);
    *(undefined *)(param_1 + 0xd1) = 1;
    sub_08001EAC(0x36);
    if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + 0x7800) {
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = sub_08001EAC(0x86);
    *(undefined2 *)(param_1 + 0xd4) = uVar2;
    uVar2 = sub_08001EAC(0x54);
    *(undefined2 *)(param_1 + 0xd6) = uVar2;
  }
  return in_lr;
}

