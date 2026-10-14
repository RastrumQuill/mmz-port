// sub_080E1120 at 0x080E1120 (thumb)

undefined4 sub_080E1120(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = 0x500;
  local_14 = -0x1900;
  if (*(byte *)(param_1 + 0x10) < 4) {
    *(undefined2 *)(param_1 + 0x76) = 0x5f00;
    *(undefined *)(param_1 + 0x75) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x76) = 0xd200;
    *(undefined *)(param_1 + 0x75) = 4;
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + -4;
  }
  pcVar2 = (char *)(param_1 + 0x75);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  local_18 = *(int *)(param_1 + 0x54) + local_18;
  local_14 = *(int *)(param_1 + 0x58) + local_14;
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    sub_080E10C8(param_1 + 0x54,*pcVar2 + '\x03',1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else if (cVar1 == '\x01') {
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    *(undefined *)(param_1 + 0x11) = 2;
    iVar3 = param_1 + 0x54;
    sub_080E10C8(iVar3,*pcVar2 + '\x03',3);
    sub_080E10C8(iVar3,*pcVar2 + '\x03',4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2000;
    sub_080E10C8(iVar3,*pcVar2 + '\x03',5);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x2000;
    local_18 = local_18 + -0x1000;
    local_14 = local_14 + 0x1000;
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    local_18 = local_18 + 0x1000;
    local_14 = local_14 + 0x500;
    sub_080D0894(2,&local_18);
    local_18 = local_18 + -0x1500;
    local_14 = local_14 + -0x1500;
    sub_080D0894(2,&local_18);
  }
  else if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0x11) = 2;
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    local_18 = local_18 + -0x1000;
    local_14 = local_14 + 0x1000;
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    sub_080E10C8(param_1 + 0x54,*pcVar2 + '\x03',3);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_080E15D8(param_1);
  if (*(char *)(param_1 + 0x11) == '\x05') {
    *(undefined *)(param_1 + 0x11) = 4;
  }
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x74) = 1;
  sub_080E130C(param_1);
  return in_lr;
}

