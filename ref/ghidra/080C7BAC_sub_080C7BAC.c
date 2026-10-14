// sub_080C7BAC at 0x080C7BAC (thumb)

undefined4 sub_080C7BAC(byte **param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_1[0xd] != (byte *)0x68736d53) {
    return in_lr;
  }
  bVar1 = param_2[2];
  if (((*(char *)((int)param_1 + 0xb) != '\0') &&
      (((*param_1 != (byte *)0x0 && ((*param_1[0xb] & 0x40) != 0)) ||
       ((*(short *)(param_1 + 1) != 0 && (-1 < (int)param_1[1])))))) &&
     (bVar1 = param_2[2], bVar1 < *(byte *)((int)param_1 + 9))) {
    return in_lr;
  }
  param_1[0xd] = param_1[0xd] + 1;
  param_1[1] = (byte *)0x0;
  *param_1 = param_2;
  param_1[0xc] = *(byte **)(param_2 + 4);
  *(byte *)((int)param_1 + 9) = bVar1;
  param_1[3] = (byte *)0x0;
  *(undefined2 *)(param_1 + 7) = 0x96;
  *(undefined2 *)(param_1 + 8) = 0x96;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  iVar3 = 0;
  pbVar2 = param_1[0xb];
  if (*param_2 != 0) {
    if (*(char *)(param_1 + 2) == '\0') goto LAB_080c7c6e;
    do {
      sub_080C7094(param_1,pbVar2);
      *pbVar2 = 0xc0;
      *(undefined4 *)(pbVar2 + 0x20) = 0;
      *(undefined4 *)(pbVar2 + 0x40) = *(undefined4 *)(param_2 + iVar3 * 4 + 8);
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 0x50;
      if ((int)(uint)*param_2 <= iVar3) break;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
  if (iVar3 < (int)(uint)*(byte *)(param_1 + 2)) {
    do {
      sub_080C7094(param_1,pbVar2);
      *pbVar2 = 0;
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 0x50;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
LAB_080c7c6e:
  if ((param_2[3] & 0x80) != 0) {
    sub_080C79AC(param_2[3]);
  }
  param_1[0xd] = (byte *)0x68736d53;
  return in_lr;
}

