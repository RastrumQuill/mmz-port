// sub_080F5184 at 0x080F5184 (thumb)

undefined4 sub_080F5184(int param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x64ac);
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    if (*(byte *)(param_1 + 0xdcc) != 6) {
      puVar5 = &DAT_0836e9d8;
      puVar2 = (undefined2 *)((*(byte *)(param_1 + 0xdcc) + 300) * 2);
      break;
    }
    if ((DAT_02030104 & 0x20) != 0) {
      puVar2 = &DAT_0836e9d8;
      puVar5 = (undefined2 *)0x264;
      break;
    }
    puVar3 = &DAT_0836ec40;
    goto LAB_080f5366;
  case 1:
    if (*(char *)(param_1 + 0xe17) == '\0') {
      return in_lr;
    }
    puVar5 = &DAT_0836e9d8;
    puVar2 = (undefined2 *)((*(byte *)(param_1 + 0xdcd) + 0x135) * 2);
    break;
  case 2:
    if (*(char *)(param_1 + 0xe17) == '\0') {
      return in_lr;
    }
    puVar5 = &DAT_0836e9d8;
    puVar2 = (undefined2 *)((*(byte *)(param_1 + 0xdcd) + 0x135) * 2);
    break;
  case 3:
    if (*(char *)(param_1 + 0xe17) == '\0') {
      return in_lr;
    }
    sub_080E9604(&DAT_08370c93,1,0x12);
    bVar1 = *(byte *)(iVar6 + 0xbc + (uint)*(byte *)(param_1 + 0xe1b));
    if (bVar1 < 10) {
      uVar4 = 0x12;
    }
    else {
      uVar4 = 0x13;
    }
    sub_080F386C(bVar1,uVar4,0x12);
    return in_lr;
  case 4:
    if (*(char *)(param_1 + 0xe17) == '\0') {
      return in_lr;
    }
    iVar6 = sub_080F5508(param_1,*(undefined *)(param_1 + 0xdcd));
    puVar5 = &DAT_0836e9d8;
    puVar2 = (undefined2 *)(((uint)(iVar6 << 0x18) >> 0x17) + 0x274);
    break;
  case 5:
    if (*(char *)(param_1 + 0xe17) == '\0') {
      return in_lr;
    }
    iVar6 = sub_080F5508(param_1,*(undefined *)(param_1 + 0xdcd));
    puVar5 = &DAT_0836e9d8;
    puVar2 = (undefined2 *)(((uint)(iVar6 << 0x18) >> 0x17) + 0x27c);
    break;
  case 6:
    if (*(char *)(param_1 + 0xe17) == '\0') {
      return in_lr;
    }
    iVar6 = sub_080F5508(param_1,*(undefined *)(param_1 + 0xdcd));
    puVar5 = &DAT_0836e9d8;
    puVar2 = (undefined2 *)(((uint)(iVar6 << 0x18) >> 0x17) + 0x288);
    break;
  case 7:
    if ((DAT_02030104 & 0x20) == 0) {
      sub_080E9604(&DAT_08370c52,1,0x12);
      return in_lr;
    }
    puVar2 = &DAT_0836e9d8;
    puVar5 = (undefined2 *)0x266;
    break;
  default:
    goto switchD_080f519e_caseD_8;
  }
  puVar3 = (ushort *)((int)puVar2 + (int)puVar5);
LAB_080f5366:
  sub_080E9604(&DAT_0836f268 + *puVar3,1,0x12);
switchD_080f519e_caseD_8:
  return in_lr;
}

