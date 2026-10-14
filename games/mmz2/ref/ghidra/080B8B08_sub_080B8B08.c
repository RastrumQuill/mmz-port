// sub_080B8B08 at 0x080B8B08 (thumb)

undefined4 sub_080B8B08(int param_1)

{
  ushort uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if (*(byte *)(param_1 + 0x12) < bVar2) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
      *(undefined *)(param_1 + 0x13) = 0;
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) | 1;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) | 1;
      sub_08012CD0(iVar4);
      *(undefined *)(param_1 + 0x11) = 1;
    }
    else {
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) & 0xfffffffe;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) & 0xfffffffe;
      sub_08012C04(iVar4);
      *(undefined *)(param_1 + 0x11) = 0;
    }
    if (*(byte *)(param_1 + 0x12) < 2) {
      *(undefined2 *)(param_1 + 0x80) = 0x80;
      sub_080032EC(0x30);
      sub_08002638(&DAT_08433520,(DAT_0202e660 - 0x1d0) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_0843352c,(DAT_0202e460 - 0xf) * 0x20 + 0x200);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if ((bVar2 & 3) < 2) {
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) & 0xfffffffe;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) & 0xfffffffe;
      sub_08012C04(iVar4);
      *(undefined *)(param_1 + 0x11) = 0;
    }
    else {
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) | 1;
      *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) | 1;
      sub_08012CD0(iVar4);
      *(undefined *)(param_1 + 0x11) = 1;
    }
    local_28 = (uint *)(iVar4 + 0x8c);
    local_24 = (uint *)(iVar4 + 0x90);
    puVar5 = (ushort *)(param_1 + 0x80);
    if (*puVar5 == 0x28) {
      local_30 = *(int *)(param_1 + 0x54);
      local_2c = *(int *)(param_1 + 0x58);
      sub_080B87E0(iVar4,&local_30,3,0);
    }
    sVar3 = sub_080EF330(*puVar5,0x12);
    if (sVar3 == 0) {
      uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
      local_30 = *(int *)(param_1 + 0x54) + (0x40 - (uVar6 * 2 >> 0x11 & 0x7f)) * 0x100;
      uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar6 & 0x7fffffff;
      local_2c = *(int *)(param_1 + 0x58) + (0x40 - (uVar6 * 2 >> 0x11 & 0x7f)) * 0x100;
      sub_080AC60C(1,&local_30);
    }
    sVar3 = sub_080EF330(*puVar5,0x12);
    if (sVar3 == 9) {
      uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
      local_30 = *(int *)(param_1 + 0x54) + (0x10 - (uVar6 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_2c = *(int *)(param_1 + 0x58) + (0x10 - (uVar6 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar6 & 0x7fffffff;
      sub_080B87E0(param_1,&local_30,2,uVar6 * 2 >> 0x11 & 0xff);
    }
    sVar3 = sub_080EF330(*puVar5,0x12);
    if (sVar3 == 0) {
      sub_080032EC(0x35);
    }
    if ((*puVar5 & 1) == 0) {
      local_30 = *(int *)(param_1 + 0x54);
      local_2c = *(int *)(param_1 + 0x58);
      sub_080B87E0(param_1,&local_30,1,*(byte *)(param_1 + 0x12) >> 1 & 3);
    }
    uVar1 = *puVar5;
    *puVar5 = uVar1 - 1;
    if ((ushort)(uVar1 - 1) == 0xffff) {
      *local_28 = *local_28 | 1;
      *local_24 = *local_24 | 1;
      sub_08012CD0(iVar4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

