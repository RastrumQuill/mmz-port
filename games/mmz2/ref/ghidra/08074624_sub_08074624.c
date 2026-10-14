// sub_08074624 at 0x08074624 (thumb)

undefined4 sub_08074624(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x71) < '\x14') {
    iVar3 = (uint)(byte)(&DAT_0833f8b4)[*(char *)(param_1 + 0x71)] * 0x18;
    puVar4 = &DAT_0833f494 + iVar3;
    bVar1 = (&DAT_0833f49f)[iVar3];
    uVar5 = 0;
    local_28 = (undefined4 *)(param_1 + 0x8c);
    local_24 = (undefined4 *)(param_1 + 0x90);
    if (bVar1 != 0xffffffff) {
      do {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          local_30 = *(int *)(param_1 + 0x54) + (int)*(short *)(puVar4 + 0x10);
        }
        else {
          local_30 = *(int *)(param_1 + 0x54) - (int)*(short *)(puVar4 + 0x10);
        }
        local_2c = *(int *)(param_1 + 0x58) + (int)*(short *)(&DAT_0833f4a6 + iVar3);
        uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar2 & 0x7fffffff;
        if ((uVar2 * 2 >> 0x11 & 1) == 0) {
          sub_080AC60C(1,&local_30);
        }
        else {
          sub_080AC60C(2,&local_30);
        }
        iVar3 = iVar3 + 0x18;
        puVar4 = puVar4 + 0x18;
        uVar5 = uVar5 + 1;
      } while (uVar5 < bVar1 + 1);
    }
  }
  else {
    sub_080AC60C(2,param_1 + 0x54);
    local_28 = (undefined4 *)(param_1 + 0x8c);
    local_24 = (undefined4 *)(param_1 + 0x90);
  }
  sub_080032EC(0x2a);
  *local_28 = 0;
  *local_24 = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

