// sub_08059534 at 0x08059534 (thumb)

undefined4 sub_08059534(int param_1)

{
  undefined uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  undefined auStack_98 [8];
  undefined auStack_90 [8];
  undefined auStack_88 [8];
  undefined auStack_80 [8];
  undefined auStack_78 [8];
  undefined auStack_70 [8];
  undefined auStack_68 [8];
  undefined auStack_60 [12];
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c [4];
  undefined **local_2c;
  undefined **local_28;
  undefined *local_24;
  
  sub_08128B5C(auStack_98,&DAT_08128f54,7);
  local_24 = auStack_90;
  sub_08128B5C(local_24,&DAT_08128f5b,7);
  sub_08128B5C(auStack_88,&DAT_08128f62,7);
  sub_08128B5C(auStack_80,&DAT_08128f69,7);
  sub_08128B5C(auStack_78,&DAT_08128f70,7);
  sub_08128B5C(auStack_70,&DAT_08128f77,7);
  sub_08128B5C(auStack_68,&DAT_08128f7e,7);
  local_50 = local_24;
  local_54 = auStack_98;
  local_4c = auStack_88;
  sub_08128B5C(auStack_60,&local_54,0xc);
  local_48 = auStack_80;
  local_44 = auStack_78;
  local_40 = auStack_70;
  sub_08128B5C(&local_54,&local_48,0xc);
  local_3c[0] = auStack_68;
  local_3c[1] = auStack_68;
  local_3c[2] = auStack_68;
  sub_08128B5C(&local_48,local_3c,0xc);
  local_3c[3] = auStack_60;
  local_2c = &local_54;
  local_28 = &local_48;
  sub_08128B5C(local_3c,local_3c + 3,0xc);
  iVar4 = *(int *)(param_1 + 0x54);
  if ((iVar4 - *(int *)(param_1 + 0xcc)) - 0x2800U < 0x19001) {
    if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xb8)) {
      if ((DAT_0202e918 & 8) != 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      if (iVar4 < *(int *)(DAT_0202dbf0 + 0x54) == (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
        iVar5 = 0;
        if ((iVar4 - *(int *)(DAT_0202dbf0 + 0x54)) + 0x3f00U < 0x7e01) {
          iVar5 = 1;
        }
      }
      else {
        iVar5 = 2;
      }
      iVar4 = sub_08059768(param_1);
      pbVar6 = (byte *)(param_1 + 0xb7);
      pbVar3 = (byte *)(param_1 + 0xb6);
      if (2 < *pbVar6) {
        *(undefined *)(*(int *)(local_3c[iVar5] + iVar4 * 4) + (uint)*pbVar3) = 0;
      }
      uVar2 = sub_08059B54(*(undefined4 *)(local_3c[iVar5] + iVar4 * 4),7);
      *(undefined *)(param_1 + 0xd) = (&DAT_088552b8)[uVar2];
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      if (uVar2 == *pbVar3) {
        *pbVar6 = *pbVar6 + 1;
        return in_lr;
      }
      *pbVar6 = 1;
      *pbVar3 = (byte)uVar2;
      return in_lr;
    }
    uVar1 = 0xd;
  }
  else {
    uVar1 = 0xe;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

