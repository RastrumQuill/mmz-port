// sub_0810C4C0 at 0x0810C4C0 (thumb)

undefined4 sub_0810C4C0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar2 + 0xdd1) == '\0') {
    if (*(char *)(iVar2 + 0xddf) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0801CFF0(param_1);
      bVar1 = *(byte *)(param_1 + 0x10);
      if (bVar1 == 1) {
        *(uint *)(param_1 + 0x54) = (*(byte *)(iVar2 + 0xddf) + 0x40) * 0x100;
        iVar2 = 0x50 - (uint)*(byte *)(iVar2 + 0xde0);
      }
      else if (bVar1 < 2) {
        if (bVar1 != 0) {
          return in_lr;
        }
        *(uint *)(param_1 + 0x54) = (0x40 - (uint)*(byte *)(iVar2 + 0xddf)) * 0x100;
        iVar2 = 0x50 - (uint)*(byte *)(iVar2 + 0xde0);
      }
      else {
        if (bVar1 == 2) {
          *(uint *)(param_1 + 0x54) = (0x40 - (uint)*(byte *)(iVar2 + 0xddf)) * 0x100;
        }
        else {
          if (bVar1 != 3) {
            return in_lr;
          }
          *(uint *)(param_1 + 0x54) = (*(byte *)(iVar2 + 0xddf) + 0x40) * 0x100;
        }
        iVar2 = *(byte *)(iVar2 + 0xde0) + 0x50;
      }
      *(int *)(param_1 + 0x58) = iVar2 << 8;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

