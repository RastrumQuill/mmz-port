// sub_08001C3C at 0x08001C3C (thumb)

undefined4 sub_08001C3C(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_18;
  
  if (DAT_02000888 != 0) {
    DAT_040000d4 = DAT_02000888;
    DAT_040000d8 = DAT_0200088c + 0x6000000;
    DAT_040000dc = DAT_02000884 >> 2 | 0x84000000;
    uVar1 = DAT_040000dc;
    local_18 = DAT_02000890;
    DAT_040000d4 = &local_18;
    DAT_040000d8 = DAT_02000888;
    DAT_040000dc = DAT_02000884 >> 2 | 0x85000000;
    uVar1 = DAT_040000dc;
  }
  if (DAT_020007c0 != 0) {
    iVar4 = DAT_020007c0;
    iVar5 = DAT_020007c0 * 0xc;
    do {
      iVar4 = iVar4 + -1;
      puVar3 = (uint *)(&DAT_020007b8 + iVar5);
      if ((*(byte *)puVar3 & 3) == 0) {
        sub_08001D30(*(undefined4 *)((int)&DAT_020007c0 + iVar5),
                     *(undefined4 *)(&DAT_020007bc + iVar5));
      }
      else if ((*(byte *)puVar3 & 3) == 1) {
        uVar2 = *puVar3 >> 2;
        if (uVar2 < 0x20) {
          sub_081284E8(*(undefined4 *)((int)&DAT_020007c0 + iVar5),
                       *(int *)(&DAT_020007bc + iVar5) + 0x6000000,*puVar3 >> 3 & 0x1fffff);
        }
        else {
          sub_081284E4(*(undefined4 *)((int)&DAT_020007c0 + iVar5),
                       *(int *)(&DAT_020007bc + iVar5) + 0x6000000,(int)uVar2 >> 2 & 0x1fffff);
        }
      }
      else {
        local_18 = *(undefined4 *)((int)&DAT_020007c0 + iVar5);
        sub_081284E4(&local_18,*(int *)(&DAT_020007bc + iVar5) + 0x6000000,
                     (int)(*puVar3 >> 2) >> 2 & 0x1fffffU | 0x1000000);
      }
      iVar5 = iVar5 + -0xc;
    } while (iVar4 != 0);
  }
  DAT_020007c0 = 0;
  return in_lr;
}

