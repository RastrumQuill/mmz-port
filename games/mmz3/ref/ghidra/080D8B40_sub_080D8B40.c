// sub_080D8B40 at 0x080D8B40 (thumb)

undefined4 sub_080D8B40(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0202f5c0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    cVar1 = *(char *)(param_1 + 0x13);
    if (cVar1 != *(char *)(param_1 + 0x12)) {
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_0800736C(param_1 + 0x74,&DAT_0836d8bc,param_1 + 0x54,0);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
    uVar3 = DAT_0202e48c;
  }
  else {
    uVar3 = *(undefined4 *)(DAT_0202f5c0 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
    cVar1 = *(char *)(param_1 + 0x11);
    if (cVar1 == '\0') {
      uVar3 = sub_0800A4B4(uVar3);
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      if ((DAT_02002650 & 0x7f) != 0xd) {
        return in_lr;
      }
      uVar3 = 0x4b800;
      if (*(int *)(param_1 + 0x58) < 0x4b801) {
        if (0x427ff < *(int *)(param_1 + 0x58)) {
          return in_lr;
        }
        uVar3 = 0x42800;
      }
    }
    else {
      if (cVar1 == '\x01') {
        uVar3 = sub_0800A3C4(uVar3);
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        return in_lr;
      }
      if (cVar1 == '\x02') {
        uVar3 = sub_0800A2CC(uVar3);
      }
      else {
        uVar3 = sub_0800A104(uVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  return in_lr;
}

