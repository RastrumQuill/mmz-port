// sub_0805B854 at 0x0805B854 (thumb)

undefined4 sub_0805B854(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082aff70,param_1 + 0x4c,1);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x805bbb1;
    goto LAB_0805b96c;
  }
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_080055FC(param_1 + 0x74,&DAT_082aff1c,param_1 + 0x4c,0xc);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x805bbb1;
  sub_080033F0(param_1 + 0x6c,1);
  uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = *(int *)(DAT_0202286c + 0x4c);
    iVar4 = iVar3 - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = 0 < iVar4;
    if (iVar3 == *(int *)(param_1 + 0x4c) || iVar4 < 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
LAB_0805b956:
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      *(undefined *)(param_1 + 0x44) = 1;
      goto LAB_0805b956;
    }
    *(undefined *)(param_1 + 0x44) = 0;
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
LAB_0805b96c:
  sub_0805B980(param_1);
  return in_lr;
}

