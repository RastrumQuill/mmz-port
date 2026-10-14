// sub_080E4CD0 at 0x080E4CD0 (thumb)

undefined4 sub_080E4CD0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  sub_08017700(param_1,0x200);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar4 + 10) >> 4 & 1;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(iVar4 + 0xd) != '\x02') goto LAB_080e4dbc;
  if (CONCAT11(*(undefined *)(iVar4 + 0x1e),*(undefined *)(iVar4 + 0x70)) == 0x500) {
    if (*(char *)(iVar4 + 0x71) < '\x03') goto LAB_080e4dbc;
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if (uVar2 == 0) goto LAB_080e4db4;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(byte *)(param_1 + 0x4c) = (*(byte *)(iVar4 + 10) >> 4 ^ 1) & 1;
    uVar2 = (*(byte *)(iVar4 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if (uVar2 == 0) {
LAB_080e4db4:
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080e4dbc:
  sub_080177F4(param_1);
  uVar2 = sub_08034794();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&UNK_0836e5e0 + (uVar2 & 0xff) * 0x30,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xfffffa00;
  }
  else {
    uVar3 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return in_lr;
}

