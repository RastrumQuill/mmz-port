// sub_080C778C at 0x080C778C (thumb)

undefined4 sub_080C778C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (*(byte *)(param_1 + 0x12) < bVar1) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
      *(undefined *)(param_1 + 0x13) = 0;
      *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) | 1;
      *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) | 1;
      sub_08017BF8(iVar3);
      *(undefined *)(param_1 + 0x11) = 1;
    }
    else {
      *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) & 0xfffffffe;
      *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) & 0xfffffffe;
      sub_08017B2C(iVar3);
      *(undefined *)(param_1 + 0x11) = 0;
    }
    if (*(byte *)(param_1 + 0x12) < 2) {
      *(undefined2 *)(param_1 + 0x80) = 0x80;
      sub_0800471C(0x30);
      sub_0800393C(&DAT_085d8b90,(DAT_0202fbec - 0x16a) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d8b9c,(DAT_0202f9ec - 0xf) * 0x20 + 0x200);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 3) < 2) {
      *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) & 0xfffffffe;
      *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) & 0xfffffffe;
      sub_08017B2C(iVar3);
      *(undefined *)(param_1 + 0x11) = 0;
    }
    else {
      *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) | 1;
      *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) | 1;
      sub_08017BF8(iVar3);
      *(undefined *)(param_1 + 0x11) = 1;
    }
    local_28 = (uint *)(iVar3 + 0x8c);
    local_24 = (uint *)(iVar3 + 0x90);
    psVar4 = (short *)(param_1 + 0x80);
    if (*psVar4 == 0x28) {
      local_30 = *(int *)(param_1 + 0x54);
      local_2c = *(int *)(param_1 + 0x58);
      sub_080C7450(iVar3,&local_30,3,0);
    }
    sVar2 = sub_080FE4D8(*psVar4,0x12);
    if (sVar2 == 0) {
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_30 = *(int *)(param_1 + 0x54) + (0x40 - (uVar5 * 2 >> 0x11 & 0x7f)) * 0x100;
      uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      local_2c = *(int *)(param_1 + 0x58) + (0x40 - (uVar5 * 2 >> 0x11 & 0x7f)) * 0x100;
      sub_080B2484(1,&local_30);
    }
    sVar2 = sub_080FE4D8(*psVar4,0x12);
    if (sVar2 == 9) {
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_30 = *(int *)(param_1 + 0x54) + (0x10 - (uVar5 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_2c = *(int *)(param_1 + 0x58) + (0x10 - (uVar5 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      sub_080C7450(param_1,&local_30,2,uVar5 * 2 >> 0x11 & 0xff);
    }
    sVar2 = sub_080FE4D8(*psVar4,0x12);
    if (sVar2 == 0) {
      sub_0800471C(0x35);
    }
    sVar2 = sub_080FE4D8(*psVar4,6);
    if (sVar2 == 0) {
      local_30 = *(int *)(param_1 + 0x54);
      local_2c = *(int *)(param_1 + 0x58);
      sub_080C7450(param_1,&local_30,1,*(byte *)(param_1 + 0x12) >> 1 & 3);
    }
    sVar2 = *psVar4;
    *psVar4 = sVar2 + -1;
    if ((short)(sVar2 + -1) == -1) {
      *local_28 = *local_28 | 1;
      *local_24 = *local_24 | 1;
      sub_08017BF8(iVar3);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

