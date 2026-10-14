// sub_080E75D0 at 0x080E75D0 (thumb)

undefined4 sub_080E75D0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x64ac);
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xdfc + (uint)*(byte *)(param_1 + 0x11));
  if (uVar6 == 0xff) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  bVar1 = *(byte *)(int *)(DAT_0203063c + uVar6);
  if ((bVar1 & 2) == 0) {
    if (*(byte *)(iVar3 + 0xb4) == uVar6) {
      uVar4 = 0x5301;
    }
    else if (*(byte *)(iVar3 + 0xb5) == uVar6) {
      uVar4 = 0x530f;
    }
    else {
      uVar5 = (byte)(&DAT_0836e30c)[uVar6 * 4] & 7;
      uVar2 = (uint)(*(int *)(DAT_0203063c + uVar6) << 0x1b) >> 0x1e;
      iVar3 = uVar5 - uVar2;
      if (iVar3 == 1) {
        uVar4 = 0x5304;
      }
      else if (iVar3 < 2) {
        if (uVar5 != uVar2) {
          return in_lr;
        }
        uVar6 = (uint)(byte)(&DAT_0836e30c)[uVar6 * 4] << 0x1a;
        if (uVar6 >> 0x1d == 1) {
          uVar4 = 0x5303;
        }
        else if (uVar6 >> 0x1d == 2) {
          if ((bVar1 & 4) == 0) {
            uVar4 = 0x5306;
          }
          else {
            uVar4 = 0x5300;
          }
        }
        else {
          uVar4 = 0x5300;
        }
      }
      else {
        if (iVar3 != 2) {
          return in_lr;
        }
        uVar4 = 0x5305;
      }
    }
  }
  else {
    uVar4 = 0x5302;
  }
  sub_08017700(param_1,uVar4);
  return in_lr;
}

