// sub_08051D58 at 0x08051D58 (thumb)

undefined4 sub_08051D58(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) != '\0') goto LAB_08051e1e;
  sub_080032EC(0x94);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  sub_080127E4(param_1,0xa602);
  iVar5 = *(int *)(param_1 + 0x54) + ((bVar1 & 1) * 2 + -1) * 0x4000;
  uVar3 = sub_080EEF7C(0x180000);
  *(uint *)(param_1 + 0x60) = -(uVar3 & 0xffff);
  uVar3 = -((int)-(uVar3 & 0xffff) >> 5) & 0xffff;
  if ((bVar1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0xb8) + 0xc00;
    if (iVar5 < iVar4) {
      iVar4 = iVar4 - *(int *)(param_1 + 0x54);
      goto LAB_08051df0;
    }
    iVar5 = sub_080EF150(0x4000,uVar3);
    iVar5 = -iVar5;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xb8) + 0xc3ff;
    if (iVar4 < iVar5) {
      iVar4 = iVar4 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar4 = 0x4000;
    }
LAB_08051df0:
    iVar5 = sub_080EF150(iVar4,uVar3);
  }
  *(int *)(param_1 + 0x5c) = iVar5;
  sub_08006E08(param_1 + 0x74,&DAT_0833c1f8);
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
  *(undefined *)(param_1 + 0xd0) = 0;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08051e1e:
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xbc);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe;
    *(undefined *)(param_1 + 0xd0) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

