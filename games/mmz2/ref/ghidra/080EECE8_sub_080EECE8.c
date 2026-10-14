// sub_080EECE8 at 0x080EECE8 (thumb)

undefined4 sub_080EECE8(int param_1,int param_2)

{
  undefined uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  puVar3 = *(undefined **)(param_2 + 0x40);
  uVar1 = *puVar3;
  *(undefined **)(param_2 + 0x40) = puVar3 + 1;
  pbVar5 = (byte *)((uint)(byte)puVar3[1] + *(int *)(param_1 + 0x18));
  *(undefined **)(param_2 + 0x40) = puVar3 + 2;
  bVar2 = puVar3[2];
  uVar4 = (uint)bVar2;
  *(undefined **)(param_2 + 0x40) = puVar3 + 3;
  switch(uVar1) {
  case 0:
    *pbVar5 = bVar2;
    return in_lr;
  case 1:
    *pbVar5 = *pbVar5 + bVar2;
    return in_lr;
  case 2:
    *pbVar5 = *pbVar5 - bVar2;
    return in_lr;
  case 3:
    *pbVar5 = *(byte *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 4:
    *pbVar5 = *pbVar5 + *(char *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 5:
    *pbVar5 = *pbVar5 - *(char *)(*(int *)(param_1 + 0x18) + uVar4);
    return in_lr;
  case 6:
    if (*pbVar5 == uVar4) {
LAB_080eee20:
      sub_080EF11C(param_1,param_2,DAT_0203e6c4);
      return in_lr;
    }
    break;
  case 7:
    if (*pbVar5 != uVar4) goto LAB_080eee20;
    break;
  case 8:
    if (uVar4 < *pbVar5) goto LAB_080eee20;
    break;
  case 9:
    if (uVar4 <= *pbVar5) goto LAB_080eee20;
    break;
  case 10:
    if (*pbVar5 <= uVar4) goto LAB_080eee20;
    break;
  case 0xb:
    if (*pbVar5 < uVar4) goto LAB_080eee20;
    break;
  case 0xc:
    if (*pbVar5 == *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080eee20;
    break;
  case 0xd:
    if (*pbVar5 != *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080eee20;
    break;
  case 0xe:
    if (*(byte *)(*(int *)(param_1 + 0x18) + uVar4) < *pbVar5) goto LAB_080eee20;
    break;
  case 0xf:
    if (*(byte *)(*(int *)(param_1 + 0x18) + uVar4) <= *pbVar5) goto LAB_080eee20;
    break;
  case 0x10:
    if (*pbVar5 <= *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080eee20;
    break;
  case 0x11:
    if (*pbVar5 < *(byte *)(*(int *)(param_1 + 0x18) + uVar4)) goto LAB_080eee20;
    break;
  default:
    goto switchD_080eed14_caseD_12;
  }
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 4;
switchD_080eed14_caseD_12:
  return in_lr;
}

