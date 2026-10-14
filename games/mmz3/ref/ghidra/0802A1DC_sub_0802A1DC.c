// sub_0802A1DC at 0x0802A1DC (thumb)

undefined4 sub_0802A1DC(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x119) != '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x218) & 1) != 0) {
    sub_08025C04(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 2;
    sub_0803298C(param_1);
    return in_lr;
  }
  cVar1 = sub_080269F0(param_1,&DAT_0835b044,0);
  if ((cVar1 != '\0') && (cVar2 = sub_080269AC(param_1,&DAT_0835b044,0), cVar2 != '\0')) {
    return in_lr;
  }
  if (cVar1 == '\x01') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + -0x800;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + 0x800;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    sub_08025C04(param_1,&DAT_0835b034,0);
  }
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x500) {
    if (*(char *)(param_1 + 0x71) < '\x03') goto LAB_0802a332;
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) goto LAB_0802a32a;
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
LAB_0802a32a:
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar3;
LAB_0802a332:
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 2;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

