// sub_080A8104 at 0x080A8104 (thumb)

undefined4 sub_080A8104(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  cVar1 = *(char *)(iVar4 + 0xd);
  if (((cVar1 == '\r') || (cVar1 == '\x16')) || (cVar1 == '\x17')) {
    sub_0800561C(param_1 + 0x74,&DAT_082b635c);
  }
  else {
    sub_0800561C(param_1 + 0x74,&DAT_082b6324);
  }
  if (*(char *)(param_1 + 0x11) == '\x04') {
    if (*(char *)(iVar4 + 0xc9) == '\x04') {
      cVar1 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
  }
  if (*(char *)(param_1 + 0x11) == *(char *)(param_1 + 0x13)) {
    sub_0809C980(param_1);
    return in_lr;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x11);
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    bVar2 = *(byte *)(param_1 + 10);
    goto LAB_080a8200;
  case 1:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0809C930(param_1,1);
    break;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0809C930(param_1,2);
    break;
  case 3:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  case 4:
    bVar2 = *(byte *)(param_1 + 10);
LAB_080a8200:
    *(byte *)(param_1 + 10) = bVar2 | 1;
    sub_0809C930(param_1,0);
    break;
  case 5:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  sub_0809C980(param_1);
  return in_lr;
}

