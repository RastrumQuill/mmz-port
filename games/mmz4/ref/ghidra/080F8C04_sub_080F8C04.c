// sub_080F8C04 at 0x080F8C04 (thumb)

undefined4 sub_080F8C04(int param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(undefined4 *)(param_1 + 0x58);
  cVar1 = sub_080F811C(param_1 + 0x54);
  pbVar4 = (byte *)(param_1 + 0xb9);
  *pbVar4 = 0;
  if (cVar1 == '\r') {
    uVar2 = 1;
    do {
      local_20 = local_20 + -0x1000 + (char)*pbVar4 * 0x2000;
      cVar1 = sub_080F811C(&local_20);
      if (cVar1 != '\r') {
        *pbVar4 = *pbVar4 ^ 1;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xf0);
  }
  uVar5 = 0;
  pbVar4 = (byte *)(param_1 + 0xb9);
  do {
    local_20 = local_20 + -0x1000 + (char)*pbVar4 * 0x2000;
    cVar1 = sub_080F811C(&local_20);
    if (cVar1 != '\r') {
      *pbVar4 = *pbVar4 ^ 1;
      break;
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 0xf0);
  uVar3 = sub_08128A9C(DAT_0202dadc,(uVar5 << 0x11) >> 0xc);
  uVar5 = (uVar5 << 0x11) >> 0xd;
  if (uVar5 <= uVar3) {
    uVar3 = uVar3 - uVar5;
    *pbVar4 = *pbVar4 ^ 1;
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      sub_0812888C(param_1 + 0x54,pbVar4,1,0x80f80e9);
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < uVar3);
  }
  return in_lr;
}

