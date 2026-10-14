// sub_08069EE0 at 0x08069EE0 (thumb)

undefined4 sub_08069EE0(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_0806a11e;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        sub_080127E4(param_1,0x718);
        if (*(int *)(param_1 + 0xc0) < 0x2000) {
          iVar4 = param_1 + 0x54;
          puVar5 = (undefined *)(param_1 + 0xbc);
          sub_080B140C(iVar4,0,*puVar5,0);
          sub_080B140C(iVar4,1,*puVar5,8);
          sub_080B140C(iVar4,2,*puVar5,0x10);
          sub_080B140C(iVar4,3,*puVar5,0x18);
          *(undefined *)(param_1 + 0x12) = 0x18;
        }
        else {
          iVar4 = param_1 + 0x54;
          puVar5 = (undefined *)(param_1 + 0xbc);
          sub_080B140C(iVar4,0,*puVar5,0x18);
          sub_080B140C(iVar4,1,*puVar5,0x10);
          sub_080B140C(iVar4,2,*puVar5,8);
          sub_080B140C(iVar4,3,*puVar5,0);
          *(undefined *)(param_1 + 0x12) = 0;
        }
        iVar4 = *(int *)(param_1 + 100);
        local_20 = *(int *)(param_1 + 0x54) + iVar4;
        local_1c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68) + -0xc00;
        sub_080B0ACC(&local_20,&DAT_0833e1d8 + (uint)(0 < iVar4) * 0x1c,0,0);
        local_1c = local_1c + 0x1000;
        sub_080B0ACC(&local_20,&DAT_0833e1d8 + (uint)(0 < iVar4) * 0x1c,0,0);
        iVar4 = *(int *)(param_1 + 0xb4);
        local_20 = *(int *)(param_1 + 0x54) + iVar4;
        local_1c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8) + -0xc00;
        sub_080B0ACC(&local_20,&DAT_0833e1d8 + (uint)(0 < iVar4) * 0x1c,0,0);
        local_1c = local_1c + 0x1000;
        sub_080B0ACC(&local_20,&DAT_0833e1d8 + (uint)(0 < iVar4) * 0x1c,0,0);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x4000;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      goto LAB_0806a11e;
    }
    if (bVar2 != 2) goto LAB_0806a11e;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if (sVar3 != 0) {
    local_20 = *(int *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    local_1c = sub_080093C4(local_20,local_1c);
    sub_080B0ACC(&local_20,&DAT_0833e210,0,0);
    sub_080B0ACC(&local_20,&DAT_0833e210,0,1);
    local_1c = local_1c + -0x400;
    sub_080AC60C(1,&local_20);
    sub_080032EC(0x2a);
    sub_0801DD2C(4,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
LAB_0806a11e:
  sub_080128D4(param_1);
  return in_lr;
}

