// sub_0803B0C8 at 0x0803B0C8 (thumb)

undefined4 sub_0803B0C8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*(undefined2 *)(&DAT_0835dd10 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x10),3);
  if (cVar2 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0835dccc,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar2 = sub_08034668(uVar4);
    sub_080073A0(param_1 + 0x74,&DAT_0835dccc,cVar2 + '\n',0xffffffff,0xffffffff,0xffffffff);
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar3 + 0x58);
  *(undefined *)(param_1 + 0x12) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 6) {
    if ((bVar1 & 1) == 0) {
      sub_0803AF64(*(undefined4 *)(param_1 + 0x28),iVar3,bVar1 + 1);
    }
    else {
      sub_0803AF64(*(undefined4 *)(param_1 + 0x28),param_1,bVar1 + 1);
    }
  }
  sub_0803B1EC(param_1);
  return in_lr;
}

